"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1624."""

def spec_graphene_hardened_malloc_1624() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1624, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1624():
    s = spec_graphene_hardened_malloc_1624()
    assert s["spec_id"] == 1624
