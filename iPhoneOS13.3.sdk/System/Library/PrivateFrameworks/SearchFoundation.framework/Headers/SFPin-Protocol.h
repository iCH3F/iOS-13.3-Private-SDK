//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, SFColor, SFLatLng;

@protocol SFPin <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int pinBehavior;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *resultID;
@property(copy, nonatomic) NSString *label;
@property(retain, nonatomic) SFColor *pinColor;
@property(retain, nonatomic) SFLatLng *location;
@end

