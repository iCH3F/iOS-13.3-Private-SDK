//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLBinaryNode.h>

#import <TSReading/EQKitLayoutSchemataFraction-Protocol.h>

@interface EQKitMathMLMFraction : EQKitMathMLBinaryNode <EQKitLayoutSchemataFraction>
{
}

- (id)schemataDenominator;
- (id)schemataNumerator;
- (id)operatorCore;
- (BOOL)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 )mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;

@end

