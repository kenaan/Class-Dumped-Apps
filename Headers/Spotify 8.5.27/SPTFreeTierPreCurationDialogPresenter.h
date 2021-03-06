//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierPreCurationLogger, SPTPopupDialog, SPTPopupManager;
@protocol SPTLinkDispatcher;

@interface SPTFreeTierPreCurationDialogPresenter : NSObject
{
    SPTPopupManager *_popupManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTPopupDialog *_dialog;
    SPTFreeTierPreCurationLogger *_logger;
}

@property(retain, nonatomic) SPTFreeTierPreCurationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPopupDialog *dialog; // @synthesize dialog=_dialog;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)presentDialogForPlaylistURI:(id)arg1;
- (id)initWithPopupManager:(id)arg1 linkDispatcher:(id)arg2 logger:(id)arg3;

@end

