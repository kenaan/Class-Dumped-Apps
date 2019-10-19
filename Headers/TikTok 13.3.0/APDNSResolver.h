//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APDNSResolver : NSObject
{
    _Bool _isEnd;
    int _isResult;
    NSString *_hostname;
    NSString *_ipAdrress;
    long long _player;
}

@property(nonatomic) long long player; // @synthesize player=_player;
@property(nonatomic) int isResult; // @synthesize isResult=_isResult;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(copy, nonatomic) NSString *ipAdrress; // @synthesize ipAdrress=_ipAdrress;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (void)parseDNS;
- (id)parseResult:(id)arg1;
- (_Bool)checkHostNameIsIP:(id)arg1;
- (void)getaddrinfo_free;
- (int)getaddrinfo_result:(char *)arg1 strSize:(int)arg2;
- (void)getaddreinfo_start:(const char *)arg1;
- (void)dealloc;

@end

