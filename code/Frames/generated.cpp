///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "generated.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,300 ), wxDefaultSize );

	mainMenu = new wxMenuBar( 0 );
	file = new wxMenu();
	wxMenuItem* fileExit;
	fileExit = new wxMenuItem( file, fileExitId, wxString( _("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	file->Append( fileExit );

	mainMenu->Append( file, _("File") );

	menuCategory = new wxMenu();
	mainMenu->Append( menuCategory, _("Category") );

	menuTask = new wxMenu();
	mainMenu->Append( menuTask, _("Task") );

	menuTools = new wxMenu();
	mainMenu->Append( menuTools, _("Tools") );

	menuHelp = new wxMenu();
	mainMenu->Append( menuHelp, _("?") );

	this->SetMenuBar( mainMenu );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	mainToolbar = new wxToolBar( this, mainToolbarId, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL );
	newTaskButton = mainToolbar->AddTool( newTaskButtonId, _("New task"), wxBitmap( wxT("../icons/new_task.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	newSubtaskButton = mainToolbar->AddTool( newSubtaskButtonId, _("New subtask"), wxBitmap( wxT("../icons/new_subtask.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	moveTaskButton = mainToolbar->AddTool( moveTaskButtonId, _("Move task"), wxBitmap( wxT("../icons/move_task.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	mainToolbar->AddSeparator();

	doneButton = mainToolbar->AddTool( doneButtonId, _("Mark as done"), wxBitmap( wxT("../icons/done.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	startTimerButton = mainToolbar->AddTool( startTimerButtonId, _("Start timer"), wxBitmap( wxT("../icons/time_start.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	stopTimerButton = mainToolbar->AddTool( stopTimerButtonId, _("Stop timer"), wxBitmap( wxT("../icons/time_stop.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	paymentDetailsButton = mainToolbar->AddTool( paymentDetailsButtonId, _("Payment details"), wxBitmap( wxT("../icons/payment.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	newNoteButton = mainToolbar->AddTool( newNoteButtonId, _("New note"), wxBitmap( wxT("../icons/new_notes.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	mainToolbar->AddSeparator();

	hideDoneButton = mainToolbar->AddTool( hideDoneButtonId, _("Hide done tasks"), wxBitmap( wxT("../icons/hide_done.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	flatViewButton = mainToolbar->AddTool( flatViewButtonId, _("Flat view"), wxBitmap( wxT("../icons/flat_view.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_CHECK, wxEmptyString, wxEmptyString, NULL );

	expandAllButton = mainToolbar->AddTool( expandAllButtonId, _("Expand all"), wxBitmap( wxT("../icons/expand_all.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	collapseAllButton = mainToolbar->AddTool( collapseAllButtonId, _("Collapse all"), wxBitmap( wxT("../icons/collapse_all.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	mainToolbar->AddSeparator();

	minimalizeWindowButton = mainToolbar->AddTool( minimalizeWindowButtonId, _("Minimalize window"), wxBitmap( wxT("../icons/minimize_window.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	settingsButton = mainToolbar->AddTool( settingsButtonId, _("Settings"), wxBitmap( wxT("../icons/settings.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	aboutButton = mainToolbar->AddTool( aboutButtonId, _("About TodoMooMoo"), wxBitmap( wxT("../icons/about.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	mainToolbar->Realize();

	bSizer1->Add( mainToolbar, 0, wxEXPAND, 5 );

	categoryToolbar = new wxToolBar( this, categoryToolbarId, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_HORIZONTAL );
	newCategoryButton = categoryToolbar->AddTool( newCategoryButtonId, _("New category"), wxBitmap( wxT("../icons/new_category.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	categoryToolbar->AddSeparator();

	allCategoriesButton = categoryToolbar->AddTool( allCategoriesButtonId, _("All categories"), wxBitmap( wxT("../icons/all_categories.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	categoryToolbar->Realize();

	bSizer1->Add( categoryToolbar, 0, wxEXPAND, 5 );

	dataView = new wxDataViewCtrl( this, dataViewId, wxDefaultPosition, wxDefaultSize, wxDV_HORIZ_RULES|wxDV_SINGLE|wxHSCROLL );
	bSizer1->Add( dataView, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	statusBar = this->CreateStatusBar( 1, 0, statusBarId );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrame::OnCloseEvent ) );
	file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::fileExitSelection ), this, fileExit->GetId());
	this->Connect( newTaskButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::newTaskButtonClicked ) );
	this->Connect( newSubtaskButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::newSubtaskButtonClicked ) );
	this->Connect( moveTaskButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::moveTaskButtonClicked ) );
	this->Connect( doneButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::doneButtonClicked ) );
	this->Connect( startTimerButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::startTimerButtonClicked ) );
	this->Connect( stopTimerButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::stopTimerButtonClicked ) );
	this->Connect( paymentDetailsButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::paymentDetailsButtonClicked ) );
	this->Connect( newNoteButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::newNoteButtonClicked ) );
	this->Connect( hideDoneButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::hideDoneButtonClicked ) );
	this->Connect( flatViewButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::flatViewButtonClicked ) );
	this->Connect( expandAllButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::expandAllButtonClicked ) );
	this->Connect( collapseAllButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::collapseAllButtonClicked ) );
	this->Connect( minimalizeWindowButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::minimalizeWindowButtonClicked ) );
	this->Connect( settingsButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::settingsButtonClicked ) );
	this->Connect( aboutButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::aboutButtonClicked ) );
	this->Connect( newCategoryButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::newCategoryButtonClicked ) );
	this->Connect( allCategoriesButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame::allCategoriesButtonClicked ) );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_COLUMN_HEADER_CLICK, wxDataViewEventHandler( MainFrame::dataViewColumnHeaderClick ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED, wxDataViewEventHandler( MainFrame::dataViewItemActivated ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_COLLAPSED, wxDataViewEventHandler( MainFrame::dataViewItemCollapsed ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_COLLAPSING, wxDataViewEventHandler( MainFrame::dataViewItemCollapsing ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_CONTEXT_MENU, wxDataViewEventHandler( MainFrame::dataViewItemContextMenu ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_DROP, wxDataViewEventHandler( MainFrame::dataViewItemDrop ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_EXPANDED, wxDataViewEventHandler( MainFrame::dataViewItemExpanded ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_EXPANDING, wxDataViewEventHandler( MainFrame::dataViewItemExpanding ), NULL, this );
	dataView->Connect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( MainFrame::dataViewSelectionChanged ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
}
