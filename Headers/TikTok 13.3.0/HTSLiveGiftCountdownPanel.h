//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSLiveGiftCountdownView, HTSLiveGiftStore, HTSLiveGivingTransaction;
@protocol HTSLiveDetailRouter, HTSLiveGiftActions, HTSLiveViewHierarchyProvider, IESLiveToastFactory, IESLiveTracker;

@interface HTSLiveGiftCountdownPanel : UIView
{
    HTSLiveGivingTransaction *_transaction;
    HTSLiveGiftCountdownView *_countdownView;
    HTSLiveGiftStore *_store;
    unsigned long long _originCount;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveGiftActions> _giftDispatcher;
    id <IESLiveTracker> _tracker;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveToastFactory> _toastFactory;
}

@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveGiftActions> giftDispatcher; // @synthesize giftDispatcher=_giftDispatcher;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) unsigned long long originCount; // @synthesize originCount=_originCount;
@property(retain, nonatomic) HTSLiveGiftStore *store; // @synthesize store=_store;
@property(nonatomic) __weak HTSLiveGiftCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) HTSLiveGivingTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)dismiss;
- (void)willRemoveSubview:(id)arg1;
- (void)foceEndCountdownView;
- (void)loadCountdownView;
- (void)loadCoverView;
- (void)startAnimationWithFrame:(struct CGRect)arg1;
- (id)initWithOriginCount:(unsigned long long)arg1;

@end

