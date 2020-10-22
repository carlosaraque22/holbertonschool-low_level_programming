(require'package)
(let* ((no-ssl (and (memq system-type '(windows-nt ms-dos))
		    (not (gnutls-available-p))))
       (url (concat (if no-ssl "http""https") "://melpa.org/packages/")))
  (add-to-list'package-archives (cons"melpa" url) t))
(when (< emacs-major-version 25)
  (add-to-list'package-archives '("gnu" . "http://elpa.gnu.org/packages/")))
(package-initialize)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(custom-safe-themes
   (quote
    ("8b58ef2d23b6d164988a607ee153fd2fa35ee33efc394281b1028c2797ddeebb" default)))
 '(package-selected-packages
   (quote
    (berrys-theme emojify flycheck google-translate highlight highlight-symbol hl-anything auto-complete projectile monokai-theme magit ido-vertical-mode))))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )

(ac-config-default)

(load-theme 'monokai t)

(auto-complete-mode)

(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t
      global-linum-mode 1)

(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
(setq column-number-mode t)
(global-linum-mode 1)

(highlight-symbol-mode)
