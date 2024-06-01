// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

package com.google.protobuf;

import com.google.protobuf.Descriptors.Descriptor;
import com.google.protobuf.GeneratedMessage.FieldAccessorTable;
/**
 *  Stub for GeneratedMessageV3 wrapping GeneratedMessage for compatibility with older gencode.
 *  This class is deprecated, and slated for removal in the next breaking change.
 *  Users should update gencode to >= 4.26.x which replaces GeneratedMessageV3 with GeneratedMessage.
 */
@Deprecated
public abstract class GeneratedMessageV3 extends GeneratedMessage {
  protected static boolean alwaysUseFieldBuilders = GeneratedMessage.alwaysUseFieldBuilders;

  protected GeneratedMessageV3() {
    super();
  }

  protected GeneratedMessageV3(Builder<?> builder) {
    super(builder);
  }


  @Deprecated
  public abstract static class Builder<BuilderT extends Builder<BuilderT>> extends GeneratedMessage.Builder<BuilderT> {
    protected Builder() {
      super(null);
    }

    protected Builder(BuilderParent builderParent) {
      super(builderParent);
    }

    


  }

  public interface ExtendableMessageOrBuilder<MessageT extends ExtendableMessage<MessageT>>
    extends GeneratedMessage.ExtendableMessageOrBuilder<MessageT> {
  }
    
  @Deprecated
  public abstract static class ExtendableMessage<MessageT extends ExtendableMessage<MessageT>>
      extends GeneratedMessage.ExtendableMessage<MessageT> {

    protected ExtendableMessage() {
      super();
    }

    protected ExtendableMessage(ExtendableBuilder<MessageT, ?> builder) {
      super(builder);
    }
  }

  @Deprecated
  public static final class FieldAccessorTable extends GeneratedMessage.FieldAccessorTable {
    public FieldAccessorTable(
        final Descriptor descriptor,
        final String[] camelCaseNames,
        final Class<? extends GeneratedMessage> messageClass,
        final Class<? extends Builder<?>> builderClass) {
        super(descriptor, camelCaseNames, messageClass, builderClass);
    }

    public FieldAccessorTable(final Descriptor descriptor, final String[] camelCaseNames) {
        super(descriptor, camelCaseNames);
    }

    @Override
    public FieldAccessorTable ensureFieldAccessorsInitialized(
        Class messageClass, Class builderClass) {
        return (FieldAccessorTable) super.ensureFieldAccessorsInitialized(messageClass, builderClass);
    }
  }

  @Override
  protected FieldAccessorTable internalGetFieldAccessorTable() {
    return (FieldAccessorTable) internalGetFieldAccessorTable();
  }

  @Deprecated
  public interface BuilderParent extends GeneratedMessage.BuilderParent {}


  @Deprecated
  protected abstract Message.Builder newBuilderForType(BuilderParent parent);

  @Deprecated
  @Override
  protected Message.Builder newBuilderForType(final AbstractMessage.BuilderParent parent) {
    return newBuilderForType(
        new BuilderParent() {
          @Override
          public void markDirty() {
            parent.markDirty();
          }
        });
  }


  // cl/597702196
  // /**
     * Check if a singular extension is present.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> boolean hasExtension(final Extension<MessageT, T> extension) {
      return hasExtension((ExtensionLite<MessageT, T>) extension);
    }
    /**
     * Check if a singular extension is present.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> boolean hasExtension(
        final GeneratedExtension<MessageT, T> extension) {
      return hasExtension((ExtensionLite<MessageT, T>) extension);
    }
    /**
     * Get the number of elements in a repeated extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> int getExtensionCount(
        final Extension<MessageT, List<T>> extension) {
      return getExtensionCount((ExtensionLite<MessageT, List<T>>) extension);
    }
    /**
     * Get the number of elements in a repeated extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> int getExtensionCount(
        final GeneratedExtension<MessageT, List<T>> extension) {
      return getExtensionCount((ExtensionLite<MessageT, List<T>>) extension);
    }
    /**
     * Get the value of an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> T getExtension(final Extension<MessageT, T> extension) {
      return getExtension((ExtensionLite<MessageT, T>) extension);
    }
    /** Get the value of an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> T getExtension(
        final GeneratedExtension<MessageT, T> extension) {
      return getExtension((ExtensionLite<MessageT, T>) extension);
    }
    /**
     * Get the value of an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> T getExtension(
        final Extension<MessageT, List<T>> extension, final int index) {
      return getExtension((ExtensionLite<MessageT, List<T>>) extension, index);
    }
    /**
     * Get the value of an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    @Override
    public final <T> T getExtension(
        final GeneratedExtension<MessageT, List<T>> extension, final int index) {
      return getExtension((ExtensionLite<MessageT, List<T>>) extension, index);
    }
    /**
     * Set the value of an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public final <T> BuilderT setExtension(
        final Extension<MessageT, T> extension, final T value) {
      return setExtension((ExtensionLite<MessageT, T>) extension, value);
    }
    /**
     * Set the value of an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public <T> BuilderT setExtension(
        final GeneratedExtension<MessageT, T> extension, final T value) {
      return setExtension((ExtensionLite<MessageT, T>) extension, value);
    }
    /**
     * Set the value of one element of a repeated extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public final <T> BuilderT setExtension(
        final Extension<MessageT, List<T>> extension,
        final int index, final T value) {
      return setExtension((ExtensionLite<MessageT, List<T>>) extension, index, value);
    }
    /**
     * Set the value of one element of a repeated extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public <T> BuilderT setExtension(
        final GeneratedExtension<MessageT, List<T>> extension,
        final int index, final T value) {
      return setExtension((ExtensionLite<MessageT, List<T>>) extension, index, value);
    }
    /**
     * Append a value to a repeated extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public final <T> BuilderT addExtension(
        final Extension<MessageT, List<T>> extension, final T value) {
      return addExtension((ExtensionLite<MessageT, List<T>>) extension, value);
    }
    /**
     * Append a value to a repeated extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public <T> BuilderT addExtension(
        final GeneratedExtension<MessageT, List<T>> extension, final T value) {
      return addExtension((ExtensionLite<MessageT, List<T>>) extension, value);
    }
    /**
     * Clear an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public final <T> BuilderT clearExtension(
        final Extension<MessageT, T> extension) {
      return clearExtension((ExtensionLite<MessageT, T>) extension);
    }
    /**
     * Clears an extension.
     * <p>TODO(b/258340024): handled by ExtensionLite version
     */
    public <T> BuilderT clearExtension(
        final GeneratedExtension<MessageT, T> extension) {
      return clearExtension((ExtensionLite<MessageT, T>) extension);
    }
  }