//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol TTFileUploadParseDNSDelegate;

@interface TTFileUploadParseDNS : NSObject
{
    _Bool _isCancelled;
    _Bool _isUserCancel;
    _Bool _isSuccess;
    _Bool _processing;
    id <TTFileUploadParseDNSDelegate> _delegate;
    NSString *_hostname;
    NSString *_ipAddress;
    double _timeout;
    unsigned long long _maxCount;
    NSError *_error;
    double _duration;
    double _lastTime;
}

+ (id)shareManager;
@property(nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) _Bool isUserCancel; // @synthesize isUserCancel=_isUserCancel;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) __weak id <TTFileUploadParseDNSDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)parseResult:(id)arg1;
- (void)parseDNS;
- (void)notifySuccess:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithHostname:(id)arg1;
- (void)dealloc;

@end

