//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOIntermitting-Protocol.h"

@class GADOIntermission, GADOOpener, GADOSlot, NSString, UIViewController;

@interface GADOOverlayProxy : NSObject <GADOIntermitting>
{
    GADOIntermission *_intermission;
    UIViewController *_viewController;
    GADOSlot *_slot;
    GADOOpener *_opener;
}

+ (id)overlayProxyForViewController:(id)arg1;
@property(retain, nonatomic) GADOOpener *opener; // @synthesize opener=_opener;
@property(nonatomic) __weak GADOSlot *slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) GADOIntermission *intermission; // @synthesize intermission=_intermission;
- (void).cxx_destruct;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

