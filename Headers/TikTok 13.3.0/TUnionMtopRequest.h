//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TUnionMtopRequest : NSObject
{
    _Bool _needLogin;
    _Bool _needAuth;
    _Bool _needWUA;
    NSString *_api;
    NSString *_version;
}

@property(nonatomic) _Bool needWUA; // @synthesize needWUA=_needWUA;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;
- (id)init;

@end

