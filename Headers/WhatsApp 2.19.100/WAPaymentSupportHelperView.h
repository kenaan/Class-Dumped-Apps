//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAProblemInputControllerBottomView-Protocol.h"

@class NSString, UIImageView, WALinkLabel;
@protocol WAProblemInputControllerBottomViewDelegate;

@interface WAPaymentSupportHelperView : UIView <WAProblemInputControllerBottomView>
{
    UIImageView *_bankImageView;
    WALinkLabel *_textLabel;
    NSString *_callNumber;
    id <WAProblemInputControllerBottomViewDelegate> delegate;
}

@property(nonatomic) __weak id <WAProblemInputControllerBottomViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (_Bool)requiresTouches;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (double)bankIconSizeForLayout;
- (id)initWithTransaction:(id)arg1 waSupportNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
