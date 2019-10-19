//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableDictionary;

@interface MSAXmlSigner : NSObject
{
    NSData *_nonce;
    NSMutableDictionary *_elementsToDigest;
    NSMutableArray *_orderedElementsToDigest;
}

- (void).cxx_destruct;
- (id)buildSignedInfoTag;
- (_Bool)generateRequestSignatureWithSessionKey:(id)arg1 signature:(id *)arg2 error:(id *)arg3;
- (void)addElementToSign:(id)arg1 withId:(id)arg2;
- (id)computeSignatureInternal:(id)arg1 sessionKey:(id)arg2 nonce:(id)arg3;
- (_Bool)computeSignatureForRequest:(id)arg1 sessionKey:(id)arg2 signature:(out id *)arg3 error:(out id *)arg4;
- (id)computeSignatureForResponse:(id)arg1 sessionKey:(id)arg2 nonce:(id)arg3;
- (id)computeDigestForString:(id)arg1;
- (_Bool)getNonce:(out id *)arg1 error:(out id *)arg2;
- (_Bool)getEncodedNonce:(out id *)arg1 error:(out id *)arg2;
- (id)init;

@end
