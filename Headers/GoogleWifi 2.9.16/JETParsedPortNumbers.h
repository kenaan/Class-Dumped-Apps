//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JETParsedPortNumbers : NSObject
{
    unsigned long long _startPort;
    unsigned long long _endPort;
    NSString *_errorString;
}

@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(nonatomic) unsigned long long endPort; // @synthesize endPort=_endPort;
@property(nonatomic) unsigned long long startPort; // @synthesize startPort=_startPort;
- (void).cxx_destruct;

@end
