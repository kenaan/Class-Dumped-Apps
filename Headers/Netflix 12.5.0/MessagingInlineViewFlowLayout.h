//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import "MessagingHandlerDelegateProtocol-Protocol.h"
#import "NFUICollectionViewFlowLayoutProtocol-Protocol.h"

@class NSString, UIView;
@protocol MessagingHandlerProtocol;

@interface MessagingInlineViewFlowLayout : UICollectionViewFlowLayout <MessagingHandlerDelegateProtocol, NFUICollectionViewFlowLayoutProtocol>
{
    _Bool _shouldForceShowItems;
    _Bool _shouldShowDecorationViews;
    _Bool _shouldAnimateVolatileBillboard;
    UIView *_cachedMessagingView;
    id <MessagingHandlerProtocol> _cachedHandler;
    double _navTotalHeight;
}

@property(nonatomic) double navTotalHeight; // @synthesize navTotalHeight=_navTotalHeight;
@property(retain, nonatomic) id <MessagingHandlerProtocol> cachedHandler; // @synthesize cachedHandler=_cachedHandler;
@property(retain, nonatomic) UIView *cachedMessagingView; // @synthesize cachedMessagingView=_cachedMessagingView;
@property(nonatomic) _Bool shouldAnimateVolatileBillboard; // @synthesize shouldAnimateVolatileBillboard=_shouldAnimateVolatileBillboard;
@property(nonatomic) _Bool shouldShowDecorationViews; // @synthesize shouldShowDecorationViews=_shouldShowDecorationViews;
@property(nonatomic) _Bool shouldForceShowItems; // @synthesize shouldForceShowItems=_shouldForceShowItems;
- (void).cxx_destruct;
- (double)statusBarHeight;
- (id)modifyLayoutAttributesForMobileCollections:(id)arg1 forDisappearing:(_Bool)arg2 withIndexPath:(id)arg3 withKind:(id)arg4;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)messageDismissed:(_Bool)arg1;
- (void)setNavTransparent:(_Bool)arg1 withTotalHeight:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

