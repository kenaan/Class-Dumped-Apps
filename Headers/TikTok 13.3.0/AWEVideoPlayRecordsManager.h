//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AWEVideoPlayRecordsManager : NSObject
{
    NSMutableArray *_records;
    double _tcp_rtt;
    double _tcp_bandwith;
    double _http_rtt;
}

+ (double)last_tcp_bandwith;
+ (double)last_http_rtt;
+ (double)last_tcp_rtt;
+ (id)lastThreeRecords;
+ (void)addPlayRecord:(id)arg1;
+ (id)sharedInstance;
@property double http_rtt; // @synthesize http_rtt=_http_rtt;
@property double tcp_bandwith; // @synthesize tcp_bandwith=_tcp_bandwith;
@property double tcp_rtt; // @synthesize tcp_rtt=_tcp_rtt;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (id)init;

@end

