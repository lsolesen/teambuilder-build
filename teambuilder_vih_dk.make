api = 2
core = 7.x

; custom modules

projects[teambuilder_activities][type] = "modules"
projects[teambuilder_activities][download][type] = "git"
projects[teambuilder_activities][download][url] = "git://github.com/lsolesen/teambuilder_activities.git"
projects[teambuilder_activities][download][branch] = "7.x-1.x"

projects[teambuilder_activities_pdf][type] = "modules"
projects[teambuilder_activities_pdf][download][type] = "git"
projects[teambuilder_activities_pdf][download][url] = "git://github.com/lsolesen/teambuilder_activities_pdf.git"
projects[teambuilder_activities_pdf][download][branch] = "7.x-1.x"

; themes

projects[corolla][type] = theme
projects[corolla][version] = 3.0-rc1

; libraries

libraries[tcpdf][download][type] = "git"
libraries[tcpdf][download][url] = git://tcpdf.git.sourceforge.net/gitroot/tcpdf/tcpdf
libraries[tcpdf][destination] = "libraries"
; Download 5.9.149
libraries[tcpdf][download][revision] = e9ebd692d5c5b1db8d9fa3a276662e75ceb9ac5a
