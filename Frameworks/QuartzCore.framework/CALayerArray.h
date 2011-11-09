/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CALayer;

@interface CALayerArray : NSArray  {
    struct _CALayerArrayIvars { 
        CALayer **layers; 
        unsigned int count; 
        unsigned int capacity; 
        unsigned long mutations; 
        BOOL retained; 
    } _ivars;
}


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getObjects:(id*)arg1;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithLayers:(id*)arg1 count:(unsigned long)arg2 retain:(BOOL)arg3;

@end