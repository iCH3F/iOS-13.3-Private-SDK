//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassPersonalizationCellContext : NSObject
{
    BOOL _bindTextToStringRepresentation;
    double _minimumTextLabelWidth;
    long long _keyboardType;
    long long _autocapitalizationType;
    NSString *_title;
    id /* CDUnknownBlockType */ _stringRepresentationBlock;
    id /* CDUnknownBlockType */ _contactUpdateBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ contactUpdateBlock; // @synthesize contactUpdateBlock=_contactUpdateBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stringRepresentationBlock; // @synthesize stringRepresentationBlock=_stringRepresentationBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL bindTextToStringRepresentation; // @synthesize bindTextToStringRepresentation=_bindTextToStringRepresentation;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
// - (void).cxx_destruct;

@end
