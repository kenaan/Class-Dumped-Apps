//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCChatMaskViewExperimentContext : SCExperimentContext
{
    _Bool _isMaskViewHidden;
    _Bool _areLabelsOpaque;
}

@property(readonly, nonatomic) _Bool areLabelsOpaque; // @synthesize areLabelsOpaque=_areLabelsOpaque;
@property(readonly, nonatomic) _Bool isMaskViewHidden; // @synthesize isMaskViewHidden=_isMaskViewHidden;
- (void)setupParameters;
- (id)experimentName;

@end

