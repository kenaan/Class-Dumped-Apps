//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPSessionObserver-Protocol.h"
#import "SPTCollectionFilterSearchBarDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPlaylistCreateNewPlaylistControllerDelegate-Protocol.h"
#import "SPTPlaylistFolderViewModelDelegate-Protocol.h"
#import "SPTPlaylistRootFolderViewController-Protocol.h"
#import "SPTSwipeableTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEButton, GLUEEntityRowStyle, NSString, NSURL, SPSession, SPTCollectionFilterSearchBar, SPTInfoView, SPTPlaylistCreateNewPlaylistController, SPTPlaylistGLUETheme, SPTSyncProgressView, SPTTableView, UIBarButtonItem, UITableView, UIView;
@protocol GLUEImageLoader, GLUETheme, SPTAlertController, SPTCollectionLogger, SPTCollectionPlatformTestManager, SPTLinkDispatcher, SPTLocalSettings, SPTNUXModifying, SPTOfflineManager, SPTOfflineModeState, SPTPageContainer, SPTPlaylistFolderViewModel, SPTPlaylistModel, SPTPlaylistRootFolderViewControllerDelegate;

@interface SPTPlaylistFolderViewController : UIViewController <SPContentInsetViewController, SPTCollectionFilterSearchBarDelegate, SPTSwipeableTableViewCellDelegate, SPTOfflineModeStateObserver, SPSessionObserver, SPTNavigationControllerNavigationBarState, UITableViewDelegate, UITableViewDataSource, SPTPlaylistFolderViewModelDelegate, SPTPlaylistCreateNewPlaylistControllerDelegate, SPTPlaylistRootFolderViewController, SPTPageController>
{
    _Bool _disableFilterBar;
    _Bool _showCreatePlaylistButton;
    _Bool _viewHasAppeared;
    _Bool _shouldReloadWhenAppearing;
    _Bool _userDefaultsLoaded;
    _Bool _needCreatePlaylistButtonReposition;
    _Bool _ignoreContentSizeChange;
    _Bool _removeFilterUIActive;
    NSString *_title;
    id <SPTPlaylistRootFolderViewControllerDelegate> _viewControllerDelegate;
    SPTInfoView *_infoView;
    SPTTableView *_tableView;
    id <GLUEImageLoader> _glueImageLoader;
    SPSession *_session;
    id <SPTOfflineManager> _offlineManager;
    long long _disableUpdatesCount;
    UIBarButtonItem *_previousLeftBarButtonItem;
    SPTCollectionFilterSearchBar *_filterSearchBar;
    id <SPTLocalSettings> _localSettings;
    SPTSyncProgressView *_iTunesLibrarySyncView;
    unsigned long long _numberOfSyncProgressViews;
    SPTPlaylistCreateNewPlaylistController *_createNewPlaylistController;
    id <SPTOfflineModeState> _offlineNotifier;
    id <SPTCollectionLogger> _logger;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTNUXModifying> _NUXModifier;
    GLUEButton *_createPlaylistButton;
    UIView *_createPlaylistButtonContainer;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPlaylistFolderViewModel> _viewModel;
    SPTPlaylistGLUETheme *_playlistGLUETheme;
    id <SPTAlertController> _alertController;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_playlistViewStyle;
    struct CGRect _lastPlaylistButtonContainerRect;
}

@property(retain, nonatomic) GLUEEntityRowStyle *playlistViewStyle; // @synthesize playlistViewStyle=_playlistViewStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTPlaylistGLUETheme *playlistGLUETheme; // @synthesize playlistGLUETheme=_playlistGLUETheme;
@property(retain, nonatomic) id <SPTPlaylistFolderViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) _Bool removeFilterUIActive; // @synthesize removeFilterUIActive=_removeFilterUIActive;
@property(nonatomic) _Bool ignoreContentSizeChange; // @synthesize ignoreContentSizeChange=_ignoreContentSizeChange;
@property(nonatomic) _Bool needCreatePlaylistButtonReposition; // @synthesize needCreatePlaylistButtonReposition=_needCreatePlaylistButtonReposition;
@property(nonatomic) struct CGRect lastPlaylistButtonContainerRect; // @synthesize lastPlaylistButtonContainerRect=_lastPlaylistButtonContainerRect;
@property(retain, nonatomic) UIView *createPlaylistButtonContainer; // @synthesize createPlaylistButtonContainer=_createPlaylistButtonContainer;
@property(retain, nonatomic) GLUEButton *createPlaylistButton; // @synthesize createPlaylistButton=_createPlaylistButton;
@property(retain, nonatomic) id <SPTNUXModifying> NUXModifier; // @synthesize NUXModifier=_NUXModifier;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(retain, nonatomic) SPTPlaylistCreateNewPlaylistController *createNewPlaylistController; // @synthesize createNewPlaylistController=_createNewPlaylistController;
@property(nonatomic) unsigned long long numberOfSyncProgressViews; // @synthesize numberOfSyncProgressViews=_numberOfSyncProgressViews;
@property(retain, nonatomic) SPTSyncProgressView *iTunesLibrarySyncView; // @synthesize iTunesLibrarySyncView=_iTunesLibrarySyncView;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isUserDefaultsLoaded) _Bool userDefaultsLoaded; // @synthesize userDefaultsLoaded=_userDefaultsLoaded;
@property(retain, nonatomic) SPTCollectionFilterSearchBar *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
@property(nonatomic) _Bool shouldReloadWhenAppearing; // @synthesize shouldReloadWhenAppearing=_shouldReloadWhenAppearing;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) UIBarButtonItem *previousLeftBarButtonItem; // @synthesize previousLeftBarButtonItem=_previousLeftBarButtonItem;
@property(nonatomic) long long disableUpdatesCount; // @synthesize disableUpdatesCount=_disableUpdatesCount;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool showCreatePlaylistButton; // @synthesize showCreatePlaylistButton=_showCreatePlaylistButton;
@property(nonatomic) _Bool disableFilterBar; // @synthesize disableFilterBar=_disableFilterBar;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak id <SPTPlaylistRootFolderViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
- (id)title;
- (void).cxx_destruct;
- (void)presentEducationPopup;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)spt_referrerIdentifier;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
@property(readonly, nonatomic) UITableView *rootTableView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadLocalSettings;
- (void)sp_updateContentInsets;
- (double)bottomInsets;
- (id)URI;
- (void)createNewPlaylistController:(id)arg1 didCreateNewPlaylistURL:(id)arg2 name:(id)arg3;
- (void)offlineAccessoryButtonTapped:(id)arg1;
- (void)filterSearchBarContextButtonTapped:(id)arg1;
- (void)filterSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)playlistFolderViewModelDidEndiTunesLibrarySync:(id)arg1;
- (void)playlistFolderViewModel:(id)arg1 didUpdateSyncingProgress:(double)arg2;
- (void)playlistFolderViewModelDidBeginiTunesLibrarySync:(id)arg1;
- (void)playlistFolderViewModel:(id)arg1 didChangeOfflineStatusWithContext:(id)arg2;
- (void)playlistFolderViewModel:(id)arg1 didChangeObjectWithContext:(id)arg2;
- (void)playlistFolderViewModel:(id)arg1 didFailToRemoveRowAtIndexPath:(id)arg2;
- (void)playlistFolderViewModel:(id)arg1 didRemoveRowAtIndexPath:(id)arg2;
- (void)playlistFolderViewModelDidUpdate:(id)arg1;
- (id)offlineSyncAccessoryButtonForIndexPath:(id)arg1;
- (void)configureOfflineSyncStatusForCell:(id)arg1 withStatus:(long long)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (id)contentViewForCell:(id)arg1;
- (void)configurePlaylistCell:(id)arg1 atIndexPath:(id)arg2 withModel:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)selectionStyleForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadIfVisible;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableViewContentSizeDidChange;
- (void)repositionCreatePlaylistButtonContainer;
- (void)unobserveTableViewContentSize;
- (void)observeTableViewContentSize;
- (void)invalidateNewPlaylistButton;
- (void)createNewPlaylistButton;
- (unsigned long long)preferredNavigationBarState;
- (void)loadView;
- (void)showCreatePlaylistPopup;
- (void)updateFilterView;
- (void)updateInfoView;
- (void)modifyInfoViewForNUX;
- (void)modifyInfoViewForEmptyStaticFilterContext;
- (void)modifyInfoViewForEmptyTextFilterContext;
- (void)removeSyncProgressView:(id)arg1;
- (void)addSyncProgressView:(id)arg1;
- (void)endIgnoringUpdates;
- (void)beginIgnoringUpdates;
- (void)updateOfflineAccessoryButtonInCell:(id)arg1 forStatus:(long long)arg2;
- (void)updateOfflineStatus:(long long)arg1 forCell:(id)arg2 atIndexPath:(id)arg3;
- (void)applyThemeLayout;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)sessionLoginModeChanged:(id)arg1;
- (id)initWithSession:(id)arg1 offlineManager:(id)arg2 viewModel:(id)arg3 localSettings:(id)arg4 glueImageLoader:(id)arg5 offlineModeNotifier:(id)arg6 logger:(id)arg7 playlistModel:(id)arg8 NUXModifier:(id)arg9 collectionTestManager:(id)arg10 playlistGLUETheme:(id)arg11 alertController:(id)arg12 linkDispatcher:(id)arg13;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

