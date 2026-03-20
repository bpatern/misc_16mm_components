String processor(const String& var) {
    if (var == "state") {

    }
return;

}

void networkCallbacks() {   
        server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send(SPIFFS, "/index.html", String(), false, processor);
    });
    server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest *request){
  request->send(SPIFFS, "/style.css","text/css");
    });

    server.on("/oa", HTTP_GET, [](AsyncWebServerRequest *request) {
        //motor toggle callback
        request->send(SPIFFS, "/index.html", String(), false, processor);
    });

    server.on("/ol", HTTP_GET, [](AsyncWebServerRequest *request) {
        //lamp toggle callback
        request->send(SPIFFS, "/index.html", String(), false, processor);
    });

        server.on("/fwd", HTTP_GET, [](AsyncWebServerRequest *request) {
        //direction F toggle callback
        request->send(SPIFFS, "/index.html", String(), false, processor);
    });
            server.on("/rev", HTTP_GET, [](AsyncWebServerRequest *request) {
        //direction R toggle callback
        request->send(SPIFFS, "/index.html", String(), false, processor);
    });

                server.on("/lampindeptoggle", HTTP_GET, [](AsyncWebServerRequest *request) {
        //enable or disable lamp linkage w motor callback
        request->send(SPIFFS, "/index.html", String(), false, processor);
    });

}