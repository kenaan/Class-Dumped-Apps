//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTFileUploadParseDNSDelegate-Protocol.h"

@class NSDictionary, NSString, TTFileUploadParseDNS;
@protocol TTVideoUploadClientProtocol;

@interface TTVideoUploadClient : NSObject <TTFileUploadParseDNSDelegate>
{
    // Error parsing type: ^{TTVideoUploader=^^?^^?^^?^v^?^?^^?^{HttpUploadClient}^{TTFileUploaderInterface}^{APPWRAPPER}^?^?^v^{UploadInfo}[2^{UploadInfo}]^{UploadError}{AVThread={atomic<int>=Ai}*^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}B^{AVProcessor}{AVTHREAD_INFO=^?^?^v}}{AVQueue<TTVideoUploader::Message *>=B^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}^{AVNode}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}iiiiii*^{AVBufferCallback}i}i{Value=(ValueHolder=qQdB*^{map<Json::Value::CZString, Json::Value, std::__1::less<Json::Value::CZString>, std::__1::allocator<std::__1::pair<const Json::Value::CZString, Json::Value> > >})b8b1^{CommentInfo}qq}{atomic<bool>=AB}{TTUploadParameters=iiiiiiiiiiiiiiiiq^vi*i}qiiiiiiiiiiiiiii{mutex={_opaque_pthread_mutex_t=q[56c]}}**********i^{TTUploadEncryptionInfo}[100c]******f*ii[1024c]qqB}, name: _uploader
    _Bool _finished;
    id <TTVideoUploadClientProtocol> _delegate;
    double _coverTime;
    NSDictionary *_logDict;
    unsigned long long _authTopkenType;
    TTFileUploadParseDNS *_parseDNS;
    NSString *_dnsIp;
}

@property(copy, nonatomic) NSString *dnsIp; // @synthesize dnsIp=_dnsIp;
@property(retain, nonatomic) TTFileUploadParseDNS *parseDNS; // @synthesize parseDNS=_parseDNS;
@property(nonatomic) unsigned long long authTopkenType; // @synthesize authTopkenType=_authTopkenType;
@property(copy, nonatomic) NSDictionary *logDict; // @synthesize logDict=_logDict;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) double coverTime; // @synthesize coverTime=_coverTime;
@property(nonatomic) __weak id <TTVideoUploadClientProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parseLog;
- (void)handleNotify:(id)arg1;
- (id)videoInfo;
- (void)handleNotifyOnMainThread:(id)arg1;
- (void)allowMergeUpload;
- (void)setManualMerge:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)setOpenResume:(_Bool)arg1;
- (void)setTranTimeOutUnit:(long long)arg1;
- (void)setUserReference:(id)arg1;
- (void)dealloc;
- (void)setOptimizationPatameter:(id)arg1;
- (void)setCookies:(id)arg1;
- (void)setUploadInfoDisable:(_Bool)arg1;
- (void)setHttpResl:(void *)arg1;
- (void)setMutiTaskEnable:(_Bool)arg1;
- (void)setProcessAction:(long long)arg1;
- (void)setPostMethodEnable:(_Bool)arg1;
- (void)setExternDNSEnable:(_Bool)arg1;
- (void)setTcpOpenTimeOutMilliSec:(long long)arg1;
- (void)setAliveMaxFailTime:(long long)arg1;
- (void)setMaxFailTime:(long long)arg1;
- (void)setQuicEnable:(_Bool)arg1;
- (void)setExternNetEnable:(int)arg1;
- (void)setFileTryHttpsEnable:(_Bool)arg1;
- (void)setHttpsEnable:(_Bool)arg1;
- (void)setUseServerHostEnable:(_Bool)arg1;
- (void)setUseUpHostEnable:(_Bool)arg1;
- (void)setMaxFailLimitEnable:(_Bool)arg1;
- (void)setSocketNum:(long long)arg1;
- (void)setSliceSize:(long long)arg1;
- (void)setOpenTimeout:(double)arg1;
- (void)setSliceTimeout:(double)arg1;
- (void)setFileRetryCount:(long long)arg1;
- (void)setSliceRetryCount:(long long)arg1;
- (void)setVideoHostname:(id)arg1;
- (void)setUploadConfigInfo:(id)arg1;
- (void)setFileHostname:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setCustomConfig:(id)arg1;
- (void)setPolicyParams:(id)arg1;
- (void)setConfigParams:(id)arg1;
- (id)initWithFilePath:(id)arg1 username:(id)arg2;
- (id)initWithFilePath:(id)arg1 username:(id)arg2 fileUploadProcessType:(unsigned long long)arg3 fileType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
