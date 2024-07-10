char pagetext[] = "<!DOCTYPE html>\
<html>\
<head>\
<title>HTML Sample Page</title>\
</head>\
<body>\
\
<h1>Sample Page</h1>\
<p>This is a sample page.</p>\
\
</body>\
</html>";

char inputpage[] = "<!DOCTYPE html>\
<html>\
<head>\
<title>Sample Page</title>\
</head>\
<body style=\"background-color: orange;\">\
    <h1> Text input</h1>\
    <form method=\"post\" action=\"textin\">\
        <label for=\"intext\">Input Text:</label><br>\
        <input type=\"text\" id=\"intext\" name=\"intext\"><br>\
        <label for=\"intext2\">Input Text2:</label><br>\
        <input type=\"text\" id=\"intext2\" name=\"intext2\"><br>\
        <input type=\"submit\">\
    </form></body>\
</html>";

char binputpage[] = "<!DOCTYPE html>\
<html>\
<head>\
<title>Sample Page</title>\
</head>\
<body style=\"background-color: blue;\">\
    <h1> Text input</h1>\
    <form method=\"post\" action=\"textin\">\
        <label for=\"bintext\">Input Text:</label><br>\
        <input type=\"text\" id=\"bintext\" name=\"bintext\"><br>\
        <label for=\"bintext2\">Input Text2:</label><br>\
        <input type=\"text\" id=\"bintext2\" name=\"bintext2\"><br>\
        <input type=\"submit\">\
    </form></body>\
</html>";