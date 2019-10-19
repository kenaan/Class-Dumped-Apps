//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TTRJSBCommand : NSObject
{
    NSString *_messageType;
    NSString *_eventID;
    NSString *_callbackID;
    NSDictionary *_params;
    NSString *_fullName;
    NSString *_origName;
    NSString *_className;
    NSString *_methodName;
    NSString *_JSSDKVersion;
    NSString *_startTime;
    NSString *_endTime;
}

@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *JSSDKVersion; // @synthesize JSSDKVersion=_JSSDKVersion;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *origName; // @synthesize origName=_origName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)toJSONString;
- (void)amendDynamicPluginNameWithFullName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictonary:(id)arg1;

@end

