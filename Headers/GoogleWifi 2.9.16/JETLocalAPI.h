//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JETSetupAPI-Protocol.h"

@class GTMSessionFetcherService, JETNetworkStatusManager, NSMutableArray, NSString;

@interface JETLocalAPI : NSObject <JETSetupAPI>
{
    NSMutableArray *_requestsInFlight;
    JETNetworkStatusManager *_networkStatusManager;
    GTMSessionFetcherService *_fetcherService;
}

+ (id)notConnectedToAccessPointError;
+ (id)parseJSONData:(id)arg1 error:(id *)arg2;
+ (id)accessPointAddress;
+ (id)sharedInstance;
@property(retain, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(retain, nonatomic) JETNetworkStatusManager *networkStatusManager; // @synthesize networkStatusManager=_networkStatusManager;
@property(retain, nonatomic) NSMutableArray *requestsInFlight; // @synthesize requestsInFlight=_requestsInFlight;
- (void).cxx_destruct;
- (void)queueRequest:(id)arg1;
- (void)postToPath:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)postJSON:(id)arg1 toPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)get:(id)arg1 timeoutSeconds:(unsigned long long)arg2 dataHandler:(CDUnknownBlockType)arg3;
- (void)get:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;
- (void)get:(id)arg1 timeoutSeconds:(unsigned long long)arg2 jsonHandler:(CDUnknownBlockType)arg3;
- (id)fetcherForPath:(id)arg1 arguments:(id)arg2 method:(id)arg3;
- (id)fetcherForPath:(id)arg1 arguments:(id)arg2 timeoutSeconds:(unsigned long long)arg3 method:(id)arg4;
- (id)localAPIURL;
- (void)configureMeshForGroupConfiguration:(id)arg1 meshKEK:(id)arg2 meshMAC:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)getThisStationSHMAC:(CDUnknownBlockType)arg1;
- (void)getSHMACForIP:(id)arg1 timeoutSeconds:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchJetstreamDiagnosticReportWithTimeoutSeconds:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchJetstreamDiagnosticReportWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureWANWithStaticIP:(id)arg1 netmask:(id)arg2 gateway:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)configureWANForPPPoEWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)configureWANForDHCPWithHandler:(CDUnknownBlockType)arg1;
- (void)getJetstreamStatus:(long long)arg1 timeoutSeconds:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchStatusWithHandler:(CDUnknownBlockType)arg1;
- (void)getJetstreamStatus:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerWithTicket:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchVorlonRegistrationInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeVorlonRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveModelAndFirmwareInfo:(CDUnknownBlockType)arg1;
- (_Bool)isConnectedToDeviceWithSSID:(id)arg1;
- (_Bool)isConnectionValidDespitePotentialError:(id)arg1 wasPreviouslyConnected:(_Bool)arg2;
- (id)initWithNetworkStatusManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
