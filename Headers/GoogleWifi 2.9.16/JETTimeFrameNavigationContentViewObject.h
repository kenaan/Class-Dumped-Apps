//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class NSString;
@protocol JETTimeFrameNavigationDelegate;

@interface JETTimeFrameNavigationContentViewObject : GOOBaseContentViewObject
{
    id <JETTimeFrameNavigationDelegate> _delegate;
    NSString *_timeFrameString;
}

@property(copy, nonatomic) NSString *timeFrameString; // @synthesize timeFrameString=_timeFrameString;
@property(readonly, nonatomic) id <JETTimeFrameNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end
