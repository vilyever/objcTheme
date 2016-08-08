//
//  VDThemeSelectorArgument.h
//  objcTemp
//
//  Created by Deng on 16/7/7.
//  Copyright © Deng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objcSelectorArgument/objcSelectorArgument.h>

extern NSString * const VDThemeSelectorArgumentRemoveThemeKey;

@class VDThemeSelectorArgument;


@interface VDThemeSelectorArgument : VDSelectorArgument

#pragma mark Public Method
+ (instancetype)argumentWithThemeKey:(NSString *)themeKey;

#pragma mark Properties
@property (nonatomic, copy) NSString *themeKey;

@end
