//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSpectrum_AntennaCharacteristics, GTLRSpectrum_DeviceCapabilities, GTLRSpectrum_DeviceDescriptor, GTLRSpectrum_DeviceOwner, NSArray, NSString;

@interface GTLRSpectrum_PawsGetSpectrumBatchRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRSpectrum_AntennaCharacteristics *antenna; // @dynamic antenna;
@property(retain, nonatomic) GTLRSpectrum_DeviceCapabilities *capabilities; // @dynamic capabilities;
@property(retain, nonatomic) GTLRSpectrum_DeviceDescriptor *deviceDesc; // @dynamic deviceDesc;
@property(retain, nonatomic) NSArray *locations; // @dynamic locations;
@property(retain, nonatomic) GTLRSpectrum_DeviceDescriptor *masterDeviceDesc; // @dynamic masterDeviceDesc;
@property(retain, nonatomic) GTLRSpectrum_DeviceOwner *owner; // @dynamic owner;
@property(copy, nonatomic) NSString *requestType; // @dynamic requestType;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

