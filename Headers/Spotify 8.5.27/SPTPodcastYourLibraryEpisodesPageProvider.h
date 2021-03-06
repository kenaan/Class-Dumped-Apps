//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryPageProvider-Protocol.h"

@class NSString, NSURL, SPTPodcastEpisodeCellActionHandlerFactory, SPTPodcastYourLibraryEpisodesViewModelImpl, SPTTheme;
@protocol GLUETheme, SPTExplicitContentAccessManager, SPTGLUEImageLoaderFactory, SPTMetaViewController, SPTNavigationRouter, SPTPerformanceMetricsViewLoggerFactory, SPTPlayerFeature, SPTPodcastDataLoader, SPTPodcastLogger, SPTPodcastTestManager, SPTPodcastUIButtonsFactory, SPTPodcastUIStringFormatter, SPTPodcastUITestManager;

@interface SPTPodcastYourLibraryEpisodesPageProvider : NSObject <SPTYourLibraryPageProvider>
{
    unsigned long long _groupIdentifier;
    unsigned long long _providerIdentifier;
    NSString *_title;
    NSURL *_URI;
    SPTPodcastYourLibraryEpisodesViewModelImpl *_viewModel;
    id <GLUETheme> _glueTheme;
    SPTTheme *_theme;
    id <SPTPodcastUIButtonsFactory> _buttonsFactory;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastTestManager> _testManager;
    SPTPodcastEpisodeCellActionHandlerFactory *_cellActionHandlerFactory;
    id <SPTPodcastLogger> _podcastLogger;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTPodcastUIStringFormatter> _podcastStringFormatter;
    id <SPTPodcastUITestManager> _podcastUITestManager;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTPlayerFeature> _playerFeature;
}

@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTPodcastUITestManager> podcastUITestManager; // @synthesize podcastUITestManager=_podcastUITestManager;
@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> podcastStringFormatter; // @synthesize podcastStringFormatter=_podcastStringFormatter;
@property(retain, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(retain, nonatomic) id <SPTPodcastLogger> podcastLogger; // @synthesize podcastLogger=_podcastLogger;
@property(retain, nonatomic) SPTPodcastEpisodeCellActionHandlerFactory *cellActionHandlerFactory; // @synthesize cellActionHandlerFactory=_cellActionHandlerFactory;
@property(readonly, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTPodcastUIButtonsFactory> buttonsFactory; // @synthesize buttonsFactory=_buttonsFactory;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTPodcastYourLibraryEpisodesViewModelImpl *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) unsigned long long groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)pageViewControllerForContext:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (id)initWithURI:(id)arg1 title:(id)arg2 pageProviderIdentifier:(unsigned long long)arg3 dataLoader:(id)arg4 testManager:(id)arg5 imageLoaderFactory:(id)arg6 explicitContentAccessManager:(id)arg7 playerFeature:(id)arg8 theme:(id)arg9 glueTheme:(id)arg10 buttonsFactory:(id)arg11 cellActionHandlerFactory:(id)arg12 metaViewController:(id)arg13 navigationRouter:(id)arg14 podcastLogger:(id)arg15 viewLoggerFactory:(id)arg16 podcastStringFormatter:(id)arg17 podcastUITestManager:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

