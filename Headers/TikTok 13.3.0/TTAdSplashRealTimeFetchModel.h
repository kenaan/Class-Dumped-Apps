//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;
@protocol TTAdSplashRealTimeFetchModelItem;

@interface TTAdSplashRealTimeFetchModel : JSONModel
{
    _Bool _isEmptyModel;
    _Bool _realFecthSucceed;
    NSArray<TTAdSplashRealTimeFetchModelItem> *_splash;
    NSArray *_withdraw;
    long long _command;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) _Bool realFecthSucceed; // @synthesize realFecthSucceed=_realFecthSucceed;
@property(nonatomic) _Bool isEmptyModel; // @synthesize isEmptyModel=_isEmptyModel;
@property(nonatomic) long long command; // @synthesize command=_command;
@property(retain, nonatomic) NSArray *withdraw; // @synthesize withdraw=_withdraw;
@property(retain, nonatomic) NSArray<TTAdSplashRealTimeFetchModelItem> *splash; // @synthesize splash=_splash;
- (void).cxx_destruct;

@end

