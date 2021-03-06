Cambiamenti
===========

* Entrare sempre come ``root``! Le password degli utenti ``root`` e
  ``admin`` non sono più sincronizzate.  La chiave di database
  ``AdminIsNotRoot`` è stata rimossa.

  Il nome utente ``admin`` è disponibile solo se è installato l'RPM
  ``nethserver-directory``.  Per retro-compatibilità ha ancora tutti i
  permessi sul sistema tramite il *Server Manager*.

  Quando ``nethserver-directory`` è installato, ``admin`` viene creato
  automaticamente, come nel passato, ma la sua password Unix non è più
  copiata da ``root``.

* Al termine dell'installazione, il *Server Manager* mostra il 
  *Wizard di prima configurazione*, che consente all'amministratore (utente ``root``)
  di cambiare password, nome host e altri parametri di base.

* La pagina :guilabel:`Package manager` è stata rinominata in
  :guilabel:`Software center`, e spostata nella categoria *Amministrazione*.
  Per migliorare l'usabilità, sono state introdotte due nuove schede
  chiamate moduli *Disponibili* e *Installati*.
  E' ora possibile effettuare l'aggiornamento dei pacchetti e leggere
  il changelog degli aggiornamenti.

* A iniziare da questa release, il client YUM è reindirizzato ai mirror
  ufficiali di CentOS per scaricare i pacchetti.
  
* La pagina :guilabel:`Certificato server` mostra il certificato SSL
  auto-firmato e consente di generarne e personalizzarne uno nuovo usando
  anche *nomi alternativi* per il server.
  Il cambio del nome del server dalla pagina :guilabel:`Nome server` non
  genererà più un nuovo certificato SSL. La stessa cosa si applica alla
  pagina :guilabel:`Dati organizzazione`.

* Aggiunto il software :ref:`phonehome-section` che raccoglie le statistiche di utilizzo.
  Il phone home è disabilitato di default.

* La pagina :guilabel:`Accesso remoto` è stata rimossa. L'accesso al
  *server-manager* è ora controllato dalla pagina :guilabel:`Servizi di rete`,
  scegliendo il servizio :guilabel:`httpd-admin`.

* L'accesso a Secure Shell (SSH) è ora configurabile dalla pagina
  :guilabel:`SSH`.

* Le seguenti sezioni sono state rimosse dall'installatore interattivo:
  password di root, filesystem cifrato, selezione tastiera, selezione fuso orario.
  Vedi :ref:`installation-interactive` e :ref:`installation-unattended`.
  Queste opzioni possono essere cambiate nel *Wizard di prima configurazione*.

* Dopo aver ripristinato un backup di configurazione su un hardware
  differente o se una scheda di rete è stata sostituita con una nuova,
  un avviso è visualizzato nelle pagine :guilabel:`Dashboard` e
  :guilabel:`Rete`.  Una procedura speciale aiuta nel :ref:`ripristino della configurazione di rete<restore-roles-section>`.
  
* Nuovi pacchetti installati di default: bind-utils, traceroute, tmpwatch.

* Il plugin presto per yum è ora installato di default per velocizzare il processo di aggiornamento.

* Se entrambi i pacchetti ``nethserver-mail-filter`` e ``nethserver-firewall-base`` 
  sono installati (modalità gateway), la porta 25 è bloccata dalle reti blue e green.
  Vedi :ref:`email-port25`.

* Il valore della prop ``php/DateTimezone`` è ora controllato dalla
  pagina :guilabel:`Data e ora`, che già imposta il fuso orario del
  sistema. Se il valore del sistema non può essere applicato al
  parametro PHP INI ``date.timezone``, viene considerato il valore di
  default ``UTC``.

* L'installazione di base ora include l'analizzatore di spazio su disco.
  Vedi :ref:`duc-section`.
