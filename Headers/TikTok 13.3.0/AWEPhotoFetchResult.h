//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHFetchResult;

@interface AWEPhotoFetchResult : NSObject
{
    long long _fetchType;
    NSArray *_assetModelArray;
    PHFetchResult *_result;
    double _fetchTime;
}

@property(nonatomic) double fetchTime; // @synthesize fetchTime=_fetchTime;
@property(retain, nonatomic) PHFetchResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray *assetModelArray; // @synthesize assetModelArray=_assetModelArray;
@property(nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
- (void).cxx_destruct;

@end

