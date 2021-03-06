//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol SCSpectaclesMessageBufferDelegate;

@interface SCSpectaclesMessageBuffer : NSObject
{
    id <SCSpectaclesMessageBufferDelegate> _delegate;
    NSMutableData *_requestBuffer;
    unsigned long long _typeBits;
    unsigned long long _lengthBits;
    unsigned long long _maxTypeValue;
}

@property(nonatomic) unsigned long long maxTypeValue; // @synthesize maxTypeValue=_maxTypeValue;
@property(nonatomic) unsigned long long lengthBits; // @synthesize lengthBits=_lengthBits;
@property(nonatomic) unsigned long long typeBits; // @synthesize typeBits=_typeBits;
@property(retain, nonatomic) NSMutableData *requestBuffer; // @synthesize requestBuffer=_requestBuffer;
@property(nonatomic) __weak id <SCSpectaclesMessageBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_tlvType;
- (unsigned long long)_tlvLength;
- (void)parseBuffer;
- (void)processData:(id)arg1;
- (id)dataWithTlvHeaderPrepended:(id)arg1 messageType:(unsigned long long)arg2;
- (id)initWithTypeBits:(unsigned long long)arg1 maxTypeValue:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

