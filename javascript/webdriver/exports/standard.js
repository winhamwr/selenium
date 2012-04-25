// Copyright 2012 Software Freedom Conservancy. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @fileoverview Configures which symbols shoudl always be exported from the
 * WebDriverJS API.
 */

goog.require('webdriver.promise');


//////////////////////////////////////////////////////////////////////////////
//
//  webdriver.promise.Promise
//
//////////////////////////////////////////////////////////////////////////////
goog.exportSymbol('promise.Promise', webdriver.promise.Promise);
goog.exportSymbol('promise.Promise.prototype.cancel',
                  webdriver.promise.Promise.prototype.cancel);
goog.exportSymbol('promise.Promise.prototype.then',
                  webdriver.promise.Promise.prototype.then);
goog.exportSymbol('promise.Promise.prototype.addBoth',
                  webdriver.promise.Promise.prototype.addBoth);
goog.exportSymbol('promise.Promise.prototype.addCallback',
                  webdriver.promise.Promise.prototype.addCallback);
goog.exportSymbol('promise.Promise.prototype.addCallbacks',
                  webdriver.promise.Promise.prototype.addCallbacks);
goog.exportSymbol('promise.Promise.prototype.addErrback',
                  webdriver.promise.Promise.prototype.addErrback);
goog.exportSymbol('promise.Promise.prototype.isPending',
                  webdriver.promise.Promise.prototype.isPending);


//////////////////////////////////////////////////////////////////////////////
//
//  webdriver.promise.Deferred
//
//////////////////////////////////////////////////////////////////////////////
goog.exportSymbol('promise.Deferred', webdriver.promise.Deferred);
