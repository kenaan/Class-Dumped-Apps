//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol BTDShareActionDelegate;

@interface BTDShareBaseView : UIView
{
    long long _type;
    id <BTDShareActionDelegate> _delegate;
    CDUnknownBlockType _tapActionHandler;
}

+ (id)shareViewItemWithType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType tapActionHandler; // @synthesize tapActionHandler=_tapActionHandler;
@property(nonatomic) __weak id <BTDShareActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)tapGestureRecognized;
- (id)init;

@end
