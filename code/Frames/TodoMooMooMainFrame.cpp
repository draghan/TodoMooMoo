#include "TodoMooMooMainFrame.h"

TodoMooMooMainFrame::TodoMooMooMainFrame( wxWindow* parent )
:
MainFrame( parent )
{
}

void TodoMooMooMainFrame::OnCloseEvent( wxCloseEvent& event )
{
    this->clean();
    this->Close();
}

void TodoMooMooMainFrame::fileExitSelection( wxCommandEvent& event )
{
    this->clean();
    this->Close();
}

void TodoMooMooMainFrame::newTaskButtonClicked( wxCommandEvent& event )
{
// TODO: Implement newTaskButtonClicked
}

void TodoMooMooMainFrame::newSubtaskButtonClicked( wxCommandEvent& event )
{
// TODO: Implement newSubtaskButtonClicked
}

void TodoMooMooMainFrame::moveTaskButtonClicked( wxCommandEvent& event )
{
// TODO: Implement moveTaskButtonClicked
}

void TodoMooMooMainFrame::doneButtonClicked( wxCommandEvent& event )
{
// TODO: Implement doneButtonClicked
}

void TodoMooMooMainFrame::startTimerButtonClicked( wxCommandEvent& event )
{
// TODO: Implement startTimerButtonClicked
}

void TodoMooMooMainFrame::stopTimerButtonClicked( wxCommandEvent& event )
{
// TODO: Implement stopTimerButtonClicked
}

void TodoMooMooMainFrame::paymentDetailsButtonClicked( wxCommandEvent& event )
{
// TODO: Implement paymentDetailsButtonClicked
}

void TodoMooMooMainFrame::newNoteButtonClicked( wxCommandEvent& event )
{
// TODO: Implement newNoteButtonClicked
}

void TodoMooMooMainFrame::hideDoneButtonClicked( wxCommandEvent& event )
{
// TODO: Implement hideDoneButtonClicked
}

void TodoMooMooMainFrame::flatViewButtonClicked( wxCommandEvent& event )
{
// TODO: Implement flatViewButtonClicked
}

void TodoMooMooMainFrame::expandAllButtonClicked( wxCommandEvent& event )
{
// TODO: Implement expandAllButtonClicked
}

void TodoMooMooMainFrame::collapseAllButtonClicked( wxCommandEvent& event )
{
// TODO: Implement collapseAllButtonClicked
}

void TodoMooMooMainFrame::minimalizeWindowButtonClicked( wxCommandEvent& event )
{
// TODO: Implement minimalizeWindowButtonClicked
}

void TodoMooMooMainFrame::settingsButtonClicked( wxCommandEvent& event )
{
// TODO: Implement settingsButtonClicked
}

void TodoMooMooMainFrame::aboutButtonClicked( wxCommandEvent& event )
{
// TODO: Implement aboutButtonClicked
}

void TodoMooMooMainFrame::newCategoryButtonClicked( wxCommandEvent& event )
{
// TODO: Implement newCategoryButtonClicked
}

void TodoMooMooMainFrame::allCategoriesButtonClicked( wxCommandEvent& event )
{
// TODO: Implement allCategoriesButtonClicked
}

void TodoMooMooMainFrame::dataViewColumnHeaderClick( wxDataViewEvent& event )
{
// TODO: Implement dataViewColumnHeaderClick
}

void TodoMooMooMainFrame::dataViewItemActivated( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemActivated
}

void TodoMooMooMainFrame::dataViewItemCollapsed( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemCollapsed
}

void TodoMooMooMainFrame::dataViewItemCollapsing( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemCollapsing
}

void TodoMooMooMainFrame::dataViewItemContextMenu( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemContextMenu
}

void TodoMooMooMainFrame::dataViewItemDrop( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemDrop
}

void TodoMooMooMainFrame::dataViewItemExpanded( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemExpanded
}

void TodoMooMooMainFrame::dataViewItemExpanding( wxDataViewEvent& event )
{
// TODO: Implement dataViewItemExpanding
}

void TodoMooMooMainFrame::dataViewSelectionChanged( wxDataViewEvent& event )
{
// TODO: Implement dataViewSelectionChanged
}

TodoMooMooMainFrame::~TodoMooMooMainFrame()
{
}

void TodoMooMooMainFrame::disconnect()
{
    static bool disconnected = false;

    if(!disconnected)
    {
        disconnected = true;
        this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( TodoMooMooMainFrame::OnCloseEvent ) );
        this->Disconnect( newTaskButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::newTaskButtonClicked ) );
        this->Disconnect( newSubtaskButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::newSubtaskButtonClicked ) );
        this->Disconnect( moveTaskButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::moveTaskButtonClicked ) );
        this->Disconnect( doneButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::doneButtonClicked ) );
        this->Disconnect( startTimerButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::startTimerButtonClicked ) );
        this->Disconnect( stopTimerButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::stopTimerButtonClicked ) );
        this->Disconnect( paymentDetailsButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::paymentDetailsButtonClicked ) );
        this->Disconnect( newNoteButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::newNoteButtonClicked ) );
        this->Disconnect( hideDoneButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::hideDoneButtonClicked ) );
        this->Disconnect( flatViewButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::flatViewButtonClicked ) );
        this->Disconnect( expandAllButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::expandAllButtonClicked ) );
        this->Disconnect( collapseAllButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::collapseAllButtonClicked ) );
        this->Disconnect( minimalizeWindowButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::minimalizeWindowButtonClicked ) );
        this->Disconnect( settingsButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::settingsButtonClicked ) );
        this->Disconnect( aboutButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::aboutButtonClicked ) );
        this->Disconnect( newCategoryButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::newCategoryButtonClicked ) );
        this->Disconnect( allCategoriesButton->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( TodoMooMooMainFrame::allCategoriesButtonClicked ) );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_COLUMN_HEADER_CLICK, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewColumnHeaderClick ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemActivated ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_COLLAPSED, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemCollapsed ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_COLLAPSING, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemCollapsing ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_CONTEXT_MENU, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemContextMenu ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_DROP, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemDrop ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_EXPANDED, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemExpanded ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_EXPANDING, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewItemExpanding ), NULL, this );
        dataView->Disconnect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( TodoMooMooMainFrame::dataViewSelectionChanged ), NULL, this );
    }

}

void TodoMooMooMainFrame::clean()
{
    static bool cleaned = false;

    this->disconnect();

    if(!cleaned)
    {
        cleaned = true;
        this->DestroyChildren();
    }
}
