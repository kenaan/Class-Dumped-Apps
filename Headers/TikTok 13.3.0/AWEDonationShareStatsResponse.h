//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEDonationSelfDonationModel, AWEDonationShareCopywritingModel;

@interface AWEDonationShareStatsResponse : AWEBaseApiModel
{
    _Bool _validDonation;
    AWEDonationShareCopywritingModel *_shareCopywriting;
    AWEDonationSelfDonationModel *_selfDonation;
}

+ (id)selfDonationJSONTransformer;
+ (id)shareCopywritingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEDonationSelfDonationModel *selfDonation; // @synthesize selfDonation=_selfDonation;
@property(retain, nonatomic) AWEDonationShareCopywritingModel *shareCopywriting; // @synthesize shareCopywriting=_shareCopywriting;
@property(nonatomic) _Bool validDonation; // @synthesize validDonation=_validDonation;
- (void).cxx_destruct;

@end

