///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/toolbar.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		enum
		{
			fileExitId = 1000,
			mainToolbarId,
			newTaskButtonId,
			newSubtaskButtonId,
			moveTaskButtonId,
			doneButtonId,
			startTimerButtonId,
			stopTimerButtonId,
			paymentDetailsButtonId,
			newNoteButtonId,
			hideDoneButtonId,
			flatViewButtonId,
			expandAllButtonId,
			collapseAllButtonId,
			minimalizeWindowButtonId,
			settingsButtonId,
			aboutButtonId,
			categoryToolbarId,
			newCategoryButtonId,
			allCategoriesButtonId,
			dataViewId,
			statusBarId
		};

		wxMenuBar* mainMenu;
		wxMenu* file;
		wxMenu* menuCategory;
		wxMenu* menuTask;
		wxMenu* menuTools;
		wxMenu* menuHelp;
		wxToolBar* mainToolbar;
		wxToolBarToolBase* newTaskButton;
		wxToolBarToolBase* newSubtaskButton;
		wxToolBarToolBase* moveTaskButton;
		wxToolBarToolBase* doneButton;
		wxToolBarToolBase* startTimerButton;
		wxToolBarToolBase* stopTimerButton;
		wxToolBarToolBase* paymentDetailsButton;
		wxToolBarToolBase* newNoteButton;
		wxToolBarToolBase* hideDoneButton;
		wxToolBarToolBase* flatViewButton;
		wxToolBarToolBase* expandAllButton;
		wxToolBarToolBase* collapseAllButton;
		wxToolBarToolBase* minimalizeWindowButton;
		wxToolBarToolBase* settingsButton;
		wxToolBarToolBase* aboutButton;
		wxToolBar* categoryToolbar;
		wxToolBarToolBase* newCategoryButton;
		wxToolBarToolBase* allCategoriesButton;
		wxDataViewCtrl* dataView;
		wxStatusBar* statusBar;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseEvent( wxCloseEvent& event ) { event.Skip(); }
		virtual void fileExitSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void newTaskButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void newSubtaskButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void moveTaskButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void doneButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void startTimerButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void stopTimerButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void paymentDetailsButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void newNoteButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void hideDoneButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void flatViewButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void expandAllButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void collapseAllButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void minimalizeWindowButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void settingsButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void aboutButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void newCategoryButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void allCategoriesButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void dataViewColumnHeaderClick( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemActivated( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemCollapsed( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemCollapsing( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemContextMenu( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemDrop( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemExpanded( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewItemExpanding( wxDataViewEvent& event ) { event.Skip(); }
		virtual void dataViewSelectionChanged( wxDataViewEvent& event ) { event.Skip(); }

	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("TodoMooMoo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL );

		~MainFrame();
};

