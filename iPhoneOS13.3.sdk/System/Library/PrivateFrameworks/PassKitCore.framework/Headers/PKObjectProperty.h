//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKObjectProperty : NSObject
{
    NSString *_name;
    NSString *_variableName;
    Class _aClass;
    NSUInteger _type;
    NSString *_valueGetter;
}

@property(readonly, copy, nonatomic) NSString *valueGetter; // @synthesize valueGetter=_valueGetter;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) Class aClass; // @synthesize aClass=_aClass;
@property(readonly, copy, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithProperty:(struct objc_property )arg1;

@end

