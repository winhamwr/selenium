module Selenium
  module WebDriver
    module Opera

      #
      # @api private
      #

      LOGGING_LEVELS = [:severe, :warning, :info, :config, :fine, :finer, :finest, :all]

      class Bridge < Remote::Bridge

        def initialize(opts = {})
          http_client = opts.delete(:http_client)
          caps        = create_capabilities(opts)

          @service = Service.default_service
          @service.start

          remote_opts = {
            :url                  => @service.uri,
            :desired_capabilities => caps
          }

          remote_opts.merge!(:http_client => http_client) if http_client

          super(remote_opts)
        end

        def browser
          :opera
        end

        def driver_extensions
          [DriverExtensions::TakesScreenshot]
        end

        def capabilities
          @capabilities ||= Remote::Capabilities.opera
        end

        def quit
          super
        ensure
          @service.stop
        end

      private

        def create_capabilities(opts)
          arguments     = opts.delete(:arguments)
          logging_level = opts.delete(:logging_level)
          logging_file  = opts.delete(:logging_file)
          host          = opts.delete(:host)
          port          = opts.delete(:port)
          launcher      = opts.delete(:launcher)
          profile       = opts.delete(:profile)
          idle          = opts.delete(:idle)
          display       = opts.delete(:display)
          autostart     = opts.delete(:autostart)
          no_restart    = opts.delete(:no_restart)
          detach        = opts.delete(:detach)
          product       = opts.delete(:product)

          unless opts.empty?
            raise ArgumentError, "unknown option#{'s' if opts.size != 1}: #{opts.inspect}"
          end

          caps = Remote::Capabilities.opera

          if arguments
            unless arguments.kind_of? Array
              raise ArgumentError, ':arguments must be an Array of Strings'
            end

            caps.merge! 'opera.arguments' => arguments.join(' ')
          end

          if logging_level
            unless LOGGING_LEVELS.include?(logging_level)
              raise ArgumentError,
                "unknown logging level #{logging_level.inspect}, available levels: #{LOGGING_LEVELS.inspect}"
            end

            caps.merge! 'opera.logging.level' => logging_level.to_s.upcase
            $DEBUG = true  # FIXME Just enable driver output?
          end

          caps.merge! 'opera.logging.file' => logging_file if logging_file
          caps.merge! 'opera.binary'       => Opera.path if Opera.path
          caps.merge! 'opera.host'         => host if host
          caps.merge! 'opera.port'         => port.to_i if port
          caps.merge! 'opera.launcher'     => launcher if launcher
          caps.merge! 'opera.profile'      => profile if profile
          caps.merge! 'opera.idle'         => !!idle unless idle.nil?
          caps.merge! 'opera.display'      => display.to_i if display
          caps.merge! 'opera.autostart'    => !!autostart unless autostart.nil?
          caps.merge! 'opera.no_restart'   => !!no_restart unless no_restart.nil?
          caps.merge! 'opera.no_quit'      => !!no_quit unless detach.nil?
          caps.merge! 'opera.product'      => product if product

          caps
        end

      end
    end
  end
end
