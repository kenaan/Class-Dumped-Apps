//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSString, SCCognacServiceClient, SCExperimentManager;

@interface SCCognacSubmitLeaderboardScoreOperation : SCCognacWVJBRequestOperation
{
    SCExperimentManager *_experimentManager;
    SCCognacServiceClient *_cognacServiceClient;
    NSString *_appId;
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SCCognacServiceClient *cognacServiceClient; // @synthesize cognacServiceClient=_cognacServiceClient;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
- (void).cxx_destruct;
- (void)run;

@end

