//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface VIModuleManager : NSObject
{
    NSDictionary *_moduleMap;
    NSSet *_moduleClasses;
    NSDictionary *_prerequisites;
}

+ (void)queryModuleWithtoken:(id)arg1;
+ (id)moduleWithModuleName:(id)arg1 moduleData:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getPrerequisitesByParams:(id)arg1;
- (id)getClassNameByModuleName:(id)arg1;
- (id)init;

@end

