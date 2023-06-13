# Arduino_Projektna_Naloga

1. Navodilo naloge: 
Tekočina med dvema nivojema: Magnetni ventil MV1 (natakanje - utripanje zelene LED s frekvenco 2 Hz) naj se odpre, ko pade tekočina pod spodnji nivo (senzor Ksp - uporabite stikalo), hkrati pa zapre magnetni ventil MV2 (odtekanje - utripanje rdeče LED s drekvenco 2 Hz). ko doseže tekočina zgornji nivo, se MV1 zapre, odpre pa MV2. Zgornji nivo zazna senzor Kzg (uporabite stikalo). Oba ventila ne moreta biti hkrati odprta. Omogočeno naj bo tudi ročno krmiljenje s tipkama N (natakanje) in P (praznjenje). Tipka N vklopi MV1 in hkrati izklopi MV2, vendar le, če tekočina ni na zgornjem nivoju. Tipka P vklopi MV2 in izklopi MV1, vendar le, če tekočina ni pod spodnjim nivojem.

2. Kosovnica: 
  - Arduino UNO,
  - protoboard,
  - 1x rdeča LED dioda,
  - 1x zelena LED dioda,
  - 2x stikalo,
  - 2x tipka,
  - 2 x 220 Ω upor,
  - 2x 1K upor.

3. Priredni seznam: 
![image](https://github.com/TeoNovak/Arduino_Projektna_Naloga/assets/135325771/56d2730d-d4e4-420e-b7ca-4e821848f00b)

4. Vezalna shema v EasyEDA:
![image](https://github.com/TeoNovak/Arduino_Projektna_Naloga/assets/135325771/f8e5f179-5e88-4700-867f-398343c33206)

5. Slika vezja (.png):
![IMG_2417-min](https://github.com/TeoNovak/Arduino_Projektna_Naloga/assets/135325771/4b97a8c1-e6f1-4799-a8d9-38c9e927556b)

6. Datoteka .ino je priložena zraven.

7. Videoposnetek delovanja najinega projektna (je dodan kot file isto kot koda za projekt zaradi velikosti).

8. Naloga se nama je zdela zanimiva, bila je malo malo zahtevna na nekaterih delih vendar sva naredila uspešno. Delovanje kode je dokaj enostavno za razumevanje začetnika (programiranja), delovanje vezja oz. uporaba vezja, pa je malo bolj kompleksna za izvajanje. Za izboljšave bi predlagal, da bi dodali še 2 tipki za hkratno polnjenje ter praznjenje, saj je bil to najkompleksnejši del v kodi, da v kodi narediš maximum in minimum površine vode.

