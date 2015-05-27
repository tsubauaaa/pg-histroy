<!DOCTYPE html>
<html lang="ja">
  <head>
    <meta charset="utf-8">
    <title>九九</title>
  </head>

  <body>
    <script type="text/javascript">

      document.write("<table border>");

      for(var i = 1 ; i < 10 ; i++) {
        document.write("<tr>");
        for(var j = 1 ; j < 10 ; j++) {
          document.write("<td>",  i*j  , "</td>");
        }
        document.write("</tr>");
      }

      document.write("</table>");
    </script>
  </body>
</html>
