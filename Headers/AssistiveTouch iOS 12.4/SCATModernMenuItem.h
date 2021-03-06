//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, HNDCustomGesture, NSIndexPath, NSString, SCATMenu, SCATModernMenuItemSupplementaryView, SCATSwitchTypingShortcut, UIImage;
@protocol SCATMenuItemCell, SCATModernMenuItemDelegate;

@interface SCATModernMenuItem : NSObject
{
    _Bool _didActivate;
    _Bool _allowedWithGuidedAccess;
    _Bool _shouldUseActivityIndicator;
    _Bool _shouldFlipForRTL;
    _Bool _disabled;
    _Bool _allowsDwellScanningToAbortAfterTimeout;
    NSString *_identifier;
    id <SCATModernMenuItemDelegate> _delegate;
    NSString *_title;
    NSString *_imageName;
    unsigned long long _activateBehavior;
    AXDispatchTimer *_repeatItemWithDismissTimer;
    NSIndexPath *_cellIndex;
    id <SCATMenuItemCell> _cell;
    SCATModernMenuItemSupplementaryView *_supplementaryView;
    NSIndexPath *_supplementaryViewIndex;
    HNDCustomGesture *_customGesture;
    UIImage *_image;
    unsigned long long _style;
    SCATSwitchTypingShortcut *_customShortcut;
    SCATMenu *_menu;
    CDUnknownBlockType _activateHandler;
    CDUnknownBlockType _updateHandler;
}

+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5 menu:(id)arg6 activateHandler:(CDUnknownBlockType)arg7 updateHandler:(CDUnknownBlockType)arg8;
+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5 allowedWithGuidedAccess:(_Bool)arg6 menu:(id)arg7 activateHandler:(CDUnknownBlockType)arg8 updateHandler:(CDUnknownBlockType)arg9;
+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5 allowedWithGuidedAccess:(_Bool)arg6;
+ (id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5;
+ (struct CGSize)imageSize;
+ (id)titleTextAttributes;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(copy, nonatomic) CDUnknownBlockType activateHandler; // @synthesize activateHandler=_activateHandler;
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) _Bool allowsDwellScanningToAbortAfterTimeout; // @synthesize allowsDwellScanningToAbortAfterTimeout=_allowsDwellScanningToAbortAfterTimeout;
@property(retain, nonatomic) SCATSwitchTypingShortcut *customShortcut; // @synthesize customShortcut=_customShortcut;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool shouldFlipForRTL; // @synthesize shouldFlipForRTL=_shouldFlipForRTL;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldUseActivityIndicator; // @synthesize shouldUseActivityIndicator=_shouldUseActivityIndicator;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isAllowedWithGuidedAccess) _Bool allowedWithGuidedAccess; // @synthesize allowedWithGuidedAccess=_allowedWithGuidedAccess;
@property(retain, nonatomic) HNDCustomGesture *customGesture; // @synthesize customGesture=_customGesture;
@property(retain, nonatomic) NSIndexPath *supplementaryViewIndex; // @synthesize supplementaryViewIndex=_supplementaryViewIndex;
@property(retain, nonatomic) SCATModernMenuItemSupplementaryView *supplementaryView; // @synthesize supplementaryView=_supplementaryView;
@property(retain, nonatomic) id <SCATMenuItemCell> cell; // @synthesize cell=_cell;
@property(retain, nonatomic) NSIndexPath *cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) _Bool didActivate; // @synthesize didActivate=_didActivate;
@property(retain, nonatomic) AXDispatchTimer *repeatItemWithDismissTimer; // @synthesize repeatItemWithDismissTimer=_repeatItemWithDismissTimer;
@property(nonatomic) unsigned long long activateBehavior; // @synthesize activateBehavior=_activateBehavior;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SCATModernMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)_atv_requiredSizeForText:(id)arg1 withMaxSize:(struct CGSize)arg2;
- (struct CGSize)_requiredSizeForText:(id)arg1 withMaxSize:(struct CGSize)arg2;
- (_Bool)_itemTitleIsContiguous;
- (id)accessibilityLabel;
- (void)flash;
- (void)activate;
- (_Bool)handleActivateWithElement:(id)arg1;
- (void)updateButtonState;
- (void)resetActivation;
- (struct CGSize)requiredSizeForTitleTextWithMaxSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5 allowedWithGuidedAccess:(_Bool)arg6 menu:(id)arg7 activateHandler:(CDUnknownBlockType)arg8 updateHandler:(CDUnknownBlockType)arg9;
- (id)init;

@end

