package org.openqa.grid.e2e.utils;

import org.openqa.grid.web.utils.ExtraServletUtil;
import org.testng.Assert;
import org.testng.annotations.Test;

import javax.servlet.Servlet;

public class ExtraServletUtilTest {


  @Test
  public void exists() {
    String s = "org.openqa.grid.e2e.utils.TestHttpServlet";
    Class<? extends Servlet> servlet = ExtraServletUtil.createServlet(s);
    Assert.assertNotNull(servlet);
  }

  @Test
  public void doesntExist() {
    String s = "org.IDontExist";
    Class<? extends Servlet> servlet = ExtraServletUtil.createServlet(s);
    Assert.assertNull(servlet);
  }
}
