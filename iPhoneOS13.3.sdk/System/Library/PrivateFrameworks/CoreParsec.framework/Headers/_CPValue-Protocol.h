//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, _CPListValue, _CPStruct;

@protocol _CPValue <NSObject>
@property(readonly, nonatomic) NSUInteger whichKind;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *bytes_value;
@property(retain, nonatomic) _CPListValue *list_value;
@property(retain, nonatomic) _CPStruct *struct_value;
@property(nonatomic) BOOL bool_value;
@property(copy, nonatomic) NSString *string_value;
@property(nonatomic) double number_value;
@property(nonatomic) int null_value;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

