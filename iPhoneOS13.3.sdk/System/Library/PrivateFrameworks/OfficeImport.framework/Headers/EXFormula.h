//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFormula : NSObject
{
}

+ (id)edTokensForFormulaString:(id)arg1 sheet:(id)arg2 workbook:(id)arg3;
+ (void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode )arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 edCell:(struct EDCellHeader )arg4 edRowBlocks:(id)arg5 state:(id)arg6;
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode )arg1 formulaClass:(Class)arg2 state:(id)arg3;
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode )arg1 state:(id)arg2;
+ (void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4;
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode )arg1 state:(id)arg2;
+ (id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 sheet:(id)arg5 workbook:(id)arg6;
+ (id)readFrom:(struct _xmlNode )arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 edCell:(struct EDCellHeader )arg5 edRowBlocks:(id)arg6 state:(id)arg7;

@end

