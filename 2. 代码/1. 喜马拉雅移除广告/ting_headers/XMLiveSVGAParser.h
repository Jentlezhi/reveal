//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SVGAParser;

@interface XMLiveSVGAParser : NSObject
{
    SVGAParser *_parser;
}

+ (void)parseWithNamed:(id)arg1 inBundle:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)parseWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)shareSVGAParser;
- (void).cxx_destruct;
@property(retain, nonatomic) SVGAParser *parser; // @synthesize parser=_parser;
- (id)init;

@end

