"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 946."""

def spec_graphene_hardened_malloc_946() -> dict:
    return {"system": "GrapheneOS", "spec_id": 946, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_946():
    s = spec_graphene_hardened_malloc_946()
    assert s["spec_id"] == 946
