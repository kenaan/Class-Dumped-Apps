//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTINekoChooseValue, YTINekoForEachValue, YTINekoMessageValue, YTINekoRepeatedValue, YTINekoScalarValue, YTINekoSerializedMessageValue, YTINekoUpdateValue, YTINekoVariableValue;

@interface YTINekoValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTINekoChooseValue *chooseValue; // @dynamic chooseValue;
@property(retain, nonatomic) YTINekoForEachValue *forEachValue; // @dynamic forEachValue;
@property(nonatomic) _Bool hasTypeId; // @dynamic hasTypeId;
@property(retain, nonatomic) YTINekoMessageValue *messageValue; // @dynamic messageValue;
@property(retain, nonatomic) YTINekoRepeatedValue *repeatedValue; // @dynamic repeatedValue;
@property(retain, nonatomic) YTINekoScalarValue *scalarValue; // @dynamic scalarValue;
@property(retain, nonatomic) YTINekoSerializedMessageValue *serializedMessageValue; // @dynamic serializedMessageValue;
@property(nonatomic) int typeId; // @dynamic typeId;
@property(retain, nonatomic) YTINekoUpdateValue *updateValue; // @dynamic updateValue;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;
@property(retain, nonatomic) YTINekoVariableValue *variableValue; // @dynamic variableValue;

@end

