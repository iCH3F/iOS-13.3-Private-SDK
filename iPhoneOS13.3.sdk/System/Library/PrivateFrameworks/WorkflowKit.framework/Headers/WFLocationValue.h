//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class CLPlacemark, NSString, WFVariableString;

@interface WFLocationValue : NSObject <WFVariableSerialization>
{
    BOOL _currentLocation;
    NSString *_locationName;
    CLPlacemark *_placemark;
    WFVariableString *_legacyVariableString;
}

@property(readonly, nonatomic) WFVariableString *legacyVariableString; // @synthesize legacyVariableString=_legacyVariableString;
@property(readonly, nonatomic, getter=isCurrentLocation) BOOL currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
// - (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithLegacyVariableString:(id)arg1;
@property(readonly, nonatomic) NSString *defaultSearchText;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithCurrentLocation;
- (id)initWithLocationName:(id)arg1 placemark:(id)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithLocationName:(id)arg1;

@end

