Preflight
- [ ] Compilar plugin (Development Editor)
- [ ] Habilitar plugin no Editor e reiniciar
- [ ] Importar NS_Lightning_System e NS_Lightning_Emitter
- [ ] Importar texturas, áudio e fonts; configurar PostProcessVolume (AutoExposure off)

Functional tests
- [ ] Rodar udp_listener.ps1 e confirmar recepção de pacotes Art-Net
- [ ] Trigger single strike via Blueprint: verificar Niagara visual + point light flash
- [ ] Trigger 10 strikes em 1s interval: monitorar FrameTime (<16ms target)
- [ ] Verificar exposição: câmera não deve saturar (branco total)

Network & DMX tests
- [ ] Testar envio Art-Net para gateway local (port 6454)
- [ ] Medir latência e perda (target <50ms, 0% loss local)
- [ ] Testar atualização apenas do canal de strobe para reduzir tráfego

Safety tests
- [ ] Map Check run and no critical errors
- [ ] Emergency Land button funciona durante FX
- [ ] Hardware override test (physical kill switch) validado

Field test
- [ ] Small outdoor test with 1–5 drones and lighting desk
- [ ] Validate visibility from audience positions
